//to-do-list
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Task {
	string description;
	bool completed;

	Task(const string& desc) : description(desc), completed(false) {}
};

void showMenu();
void addTask(vector<Task>& tasks);
void viewTasks(const vector<Task>& tasks);
void markcompleted(vector<Task>& tasks);
void removeTask(vector<Task>& tasks);

int main() {
	vector<Task>tasks;
	int choice;
	do {
		showMenu();
		cin>>choice;
		cin.ignore();
		switch(choice) {
			case 1:
				addTask(tasks);
				break;
			case 2:
				viewTasks(tasks);
				break;
			case 3:
				markcompleted(tasks);
				break;
			case 4:
				removeTask(tasks);
				break;
			case 5:
				cout<<"exiting program.goodbye!"<<endl;
				break;
			default:
				cout<<"invalid choice. please enter a number between 1 and 5."<<endl;
				break;
		}
	} while(choice!=5);
	return 0;
}
void showMenu() {
	cout<<"\n===== To-Do list Manager =====\n";
	cout<<"1.Add Task\n";
	cout<<"2.View Tasks\n";
	cout<<"3.Mark Task as completed\n";
	cout<<"4.Remove Task\n";
	cout<<"5.Exit\n";
	cout<<"enter your choice:";
}
void addTask(vector<Task>&tasks) {
	string description;
	cout<<"enter your description:";
	getline(cin,description);
	tasks.push_back(Task(description));
	cout<<"task added successfully!"<<endl;
}
void viewTasks(const vector<Task>&tasks) {
	if(tasks.empty()) {
		cout<<"no tasks to display. your to-do list is empty"<<endl;
	} else {
		cout<<"\n===== your to-do list====="<<endl;
		for(size_t i=0; i<tasks.size(); ++i) {
			cout<<i+1<<".";
			if(tasks[i].completed)
				cout<<"[X]";
			else
				cout<<"[]";
			cout<<tasks[i].description<<endl;
		}
	}
}
void markcompleted(vector<Task>&tasks) {
	viewTasks(tasks);
	if(tasks.empty()) {
		return;
	}
	int index;
	cout<<"enter the task number to mark as completed:";
	cin>>index;
	cin.ignore();
	if(index<=0||index>static_cast<int>(tasks.size())) {
		cout<<"invalid task number .no task marked as completed"<<endl;
	} else {
		tasks[index-1].completed=true;
		cout<<"task marked as completed!"<<endl;
	}
}
void removeTask(vector<Task>&tasks) {
	viewTasks(tasks);
	if(tasks.empty()) {
	return;
}
int index;
cout<<"enter the task number to remove:";
    cin>>index;
    cin.ignore();
if(index<=0||index>static_cast<int>(tasks.size())) {
	cout<<"invalid task number.no task removed."<<endl;
} else {
	tasks.erase(tasks.begin()+index-1);
		cout<<"task removed successfully!"<<endl;
	}
}
// Set information for all the students
    for (int i = 0; i < size; i++)
    {
        // Create temporary variables
        char sn[10];
        char prog[4];

        // A label that says you're editing student # 1...2...3...etc
        cout << "STUDENT # " << i + 1 << endl;
        
        cout << "Enter student number for the current student: ";
        cin >> sn;

        cout << "Enter the student's program: ";
        cin >> prog;

        // use the set method
        student[i].setInfo(sn, prog);

        cout << "END OF STUDENT # " << i + 1 << endl;
    }

	
	if (count>0){
		cout << count << " Solutions found\n";
	}else{
		cout << "Tidak ada solusi\n";
	}

	count=0;
	for (auto j = result.begin(); j != result.end(); ++j){
        count++;
		cout << count << ". " << *j << "\n";
	}

    end = clock();

    double duration_sec = double(end-start)/CLOCKS_PER_SEC*1000;

	cout << "Excecution Time : " << d
while(r <= n-1){
            if(sections[i] >= sections[r]){
                wateredSections[i]++;
                r++;
            }
            else break;
            
        }
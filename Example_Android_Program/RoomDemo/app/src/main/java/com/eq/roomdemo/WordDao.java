package com.eq.roomdemo;

import androidx.lifecycle.LiveData;
import androidx.room.Dao;
import androidx.room.Insert;
import androidx.room.OnConflictStrategy;
import androidx.room.Query;

import java.util.List;

@Dao
public interface WordDao {

    @Insert ( onConflict = OnConflictStrategy.IGNORE)
    void insert ( Word word);

    @Query("DELETE from word_table")
    void deleteAll ();

    @Query("SELECT * from word_table ORDER By word ASC")
    LiveData < List<Word> > getAllAlphabetizedWords ();
}

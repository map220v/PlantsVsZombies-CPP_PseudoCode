// Class: NoticeContentData


/* NoticeContentData::NoticeContentData() */

void __thiscall NoticeContentData::NoticeContentData(NoticeContentData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  this[0x18] = (NoticeContentData)0x1;
  return;
}


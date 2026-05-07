// Class: RedPackLeaderBoardInfo


/* RedPackLeaderBoardInfo::RedPackLeaderBoardInfo() */

void __thiscall RedPackLeaderBoardInfo::RedPackLeaderBoardInfo(RedPackLeaderBoardInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}


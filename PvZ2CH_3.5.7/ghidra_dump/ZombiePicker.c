// Class: ZombiePicker


/* ZombiePicker::ZombiePicker() */

void __thiscall ZombiePicker::ZombiePicker(ZombiePicker *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x38));
  return;
}


/* ZombiePicker::InitForWave() */

void __thiscall ZombiePicker::InitForWave(ZombiePicker *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  ::clear((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
           *)(this + 8));
  return;
}


/* ZombiePicker::Init() */

void __thiscall ZombiePicker::Init(ZombiePicker *this)

{
  InitForWave(this);
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  ::clear((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
           *)(this + 0x38));
  return;
}


/* ZombiePicker::~ZombiePicker() */

void __thiscall ZombiePicker::~ZombiePicker(ZombiePicker *this)

{
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
          *)(this + 0x38));
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
          *)(this + 8));
  return;
}


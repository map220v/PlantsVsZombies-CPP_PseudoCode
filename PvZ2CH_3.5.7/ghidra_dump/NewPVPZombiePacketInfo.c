// Class: NewPVPZombiePacketInfo


/* NewPVPZombiePacketInfo::NewPVPZombiePacketInfo() */

void __thiscall NewPVPZombiePacketInfo::NewPVPZombiePacketInfo(NewPVPZombiePacketInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NewPVPZombiePacketInfo::~NewPVPZombiePacketInfo() */

void __thiscall NewPVPZombiePacketInfo::~NewPVPZombiePacketInfo(NewPVPZombiePacketInfo *this)

{
  std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::~vector
            ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)(this + 8));
  return;
}


/* NewPVPZombiePacketInfo::NewPVPZombiePacketInfo(NewPVPZombiePacketInfo const&) */

void __thiscall
NewPVPZombiePacketInfo::NewPVPZombiePacketInfo
          (NewPVPZombiePacketInfo *this,NewPVPZombiePacketInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::vector
            ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* NewPVPZombiePacketInfo::TEMPNAMEPLACEHOLDERVALUE(NewPVPZombiePacketInfo const&) */

NewPVPZombiePacketInfo * __thiscall
NewPVPZombiePacketInfo::operator=(NewPVPZombiePacketInfo *this,NewPVPZombiePacketInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::operator=
            ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* NewPVPZombiePacketInfo::NewPVPZombiePacketInfo(int, std::vector<NewPVPZombieLevelInfo,
   std::allocator<NewPVPZombieLevelInfo> > const&) */

void __thiscall
NewPVPZombiePacketInfo::NewPVPZombiePacketInfo
          (NewPVPZombiePacketInfo *this,int param_1,vector *param_2)

{
  *(int *)this = param_1;
  std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::vector
            ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)(this + 8),
             param_2);
  return;
}


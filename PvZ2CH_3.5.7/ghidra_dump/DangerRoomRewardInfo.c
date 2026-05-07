// Class: DangerRoomRewardInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomRewardInfo::DangerRoomRewardInfo() */

void __thiscall DangerRoomRewardInfo::DangerRoomRewardInfo(DangerRoomRewardInfo *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(undefined4 *)this = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomRewardInfo::IsImmediateReward() */

bool __thiscall DangerRoomRewardInfo::IsImmediateReward(DangerRoomRewardInfo *this)

{
  return *(int *)this - 2U < 9;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomRewardInfo::ApplyReward(DangerRoomInfo&) */

void __thiscall
DangerRoomRewardInfo::ApplyReward(DangerRoomRewardInfo *this,DangerRoomInfo *param_1)

{
  int iVar1;
  uint uVar2;
  LawnMowerModule *this_00;
  NameMapperBase *this_01;
  long lVar3;
  PlayerInfo *this_02;
  char *__s;
  Board *this_03;
  int local_10 [2];
  long local_8;
  
  iVar1 = *(int *)this;
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
    local_10[0] = NameMapperBase::GetIdForName(this_01,(string *)(lVar3 + 8));
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(param_1 + 0x18),local_10);
  }
  else if (iVar1 - 2U < 3) {
    Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),(iVar1 + -1) * 200);
  }
  else if (iVar1 - 5U < 3) {
    this_03 = *(Board **)(gLawnApp + 0x9f0);
    uVar2 = Board::GetPlantfoodCount(this_03);
    Board::SetPlantfoodCount(this_03,iVar1 + -4 + (uVar2 & 0xff));
  }
  else if (iVar1 - 8U < 3) {
    this_00 = (LawnMowerModule *)FUN_03ca7870(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LawnMowerModule::AwardMowers(this_00,*(int *)this + -7,false);
  }
  else {
    if (iVar1 == 0xb) {
      this_02 = (PlayerInfo *)ProfileUtils::Profile();
      __s = "powerupwizardfinger";
    }
    else if (iVar1 == 0xc) {
      this_02 = (PlayerInfo *)ProfileUtils::Profile();
      __s = "powerupflickzombie";
    }
    else {
      if (iVar1 != 0xd) goto LAB_03ca7af0;
      this_02 = (PlayerInfo *)ProfileUtils::Profile();
      __s = "powerupsnowball";
    }
    std::string::string((string *)local_10,__s);
    PlayerInfo::ModifyPowerupUses(this_02,(string *)local_10,1);
    std::string::~string((string *)local_10);
    nop();
  }
LAB_03ca7af0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


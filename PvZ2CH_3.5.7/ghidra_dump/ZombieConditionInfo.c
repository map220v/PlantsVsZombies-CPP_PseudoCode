// Class: ZombieConditionInfo


/* ZombieConditionInfo::ZombieConditionInfo(ZombieConditionInfo const&) */

void __thiscall
ZombieConditionInfo::ZombieConditionInfo(ZombieConditionInfo *this,ZombieConditionInfo *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* ZombieConditionInfo::TEMPNAMEPLACEHOLDERVALUE(ZombieConditionInfo const&) */

ZombieConditionInfo * __thiscall
ZombieConditionInfo::operator=(ZombieConditionInfo *this,ZombieConditionInfo *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


/* ZombieConditionInfo::TEMPNAMEPLACEHOLDERVALUE(ZombieConditionInfo&&) */

ZombieConditionInfo * __thiscall
ZombieConditionInfo::operator=(ZombieConditionInfo *this,ZombieConditionInfo *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


// Class: JamApplier


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::ApplyJamToJammableGridItem(GridItemJammable*, std::string const&, std::string const&)
   const */

void __thiscall
JamApplier::ApplyJamToJammableGridItem
          (JamApplier *this,GridItemJammable *param_1,string *param_2,string *param_3)

{
  byte bVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,param_3);
  if (bVar1 < (param_1 != (GridItemJammable *)0x0)) {
    (**(code **)(*(long *)param_1 + 0x308))(asStack_10,param_1);
    cVar2 = std::operator==(asStack_10,param_3);
    std::string::~string(asStack_10);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)param_1 + 0x300))();
    }
    else {
      (**(code **)(*(long *)param_1 + 0x2f8))(param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::getMusicalJamProps() const */

void JamApplier::getMusicalJamProps(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"MusicalJams");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x14,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::ApplyJamToAllJammableGridItems(std::string const&, std::string const&) const */

void __thiscall
JamApplier::ApplyJamToAllJammableGridItems(JamApplier *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  GridItemJammable *pGVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_1,param_2);
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,4);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      pGVar4 = Sexy::RtObject::Cast<GridItemJammable>((RtObject *)*puVar3);
      if (pGVar4 != (GridItemJammable *)0x0) {
        ApplyJamToJammableGridItem(this,pGVar4,param_1,param_2);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::ApplyMusicConditionsTo(std::string const&, Zombie*) const */

void __thiscall JamApplier::ApplyMusicConditionsTo(JamApplier *this,string *param_1,Zombie *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  float fVar6;
  Zombie *pZVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = getMusicalJamProps();
  local_18 = std::
             map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
             ::find((map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
                     *)(lVar4 + 0x70),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(lVar4 + 0x70));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if ((bVar1) &&
     (lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18),
     *(int *)(lVar4 + 8) != -1)) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    pZVar7._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar7._0_4_,0,param_2,*(undefined4 *)(lVar4 + 8),1);
  }
  pRVar5 = (RtWeakPtrBase *)Zombie::GetType(param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar5);
  iVar3 = BoardHelpers::GetLevelBasedZombieTypeIndexByType
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  (**(code **)(*(long *)param_2 + 0x290))((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  cVar2 = std::operator==((string *)&local_10,param_1);
  if ((cVar2 == '\0') &&
     (fVar6 = (float)BoardHelpers::ApplyLevelBasedModifierValue(1.0,0xe,iVar3,1), fVar6 != 0.0)) {
    std::string::~string((string *)&local_10);
  }
  else {
    std::string::~string((string *)&local_10);
    if (*(code **)(*(long *)param_2 + 0x280) != Zombie::StartJamming) {
      (**(code **)(*(long *)param_2 + 0x280))(param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::RemoveMusicConditionsFrom(std::string const&, Zombie*) const */

void __thiscall
JamApplier::RemoveMusicConditionsFrom(JamApplier *this,string *param_1,Zombie *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = getMusicalJamProps();
  local_18 = std::
             map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
             ::find((map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
                     *)(lVar3 + 0x70),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(lVar3 + 0x70));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if ((*(int *)(lVar3 + 8) != -1) && (cVar2 = Zombie::HasCondition(param_2), cVar2 != '\0')) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      Zombie::EndCondition(param_2,*(undefined4 *)(lVar3 + 8));
    }
  }
  if (*(code **)(*(long *)param_2 + 0x288) != Zombie::StopJamming) {
    (**(code **)(*(long *)param_2 + 0x288))(param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::ApplyMusicConditionsToAllZombies(std::string const&, std::string const&) const */

void __thiscall
JamApplier::ApplyMusicConditionsToAllZombies(JamApplier *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_1,param_2);
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,2);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      cVar1 = RealObject::IsOnTeam(pZVar4,2);
      if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar1 == '\0')
         ) {
        RemoveMusicConditionsFrom(this,param_1,pZVar4);
        ApplyMusicConditionsTo(this,param_2,pZVar4);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::ChangeMusicGenre(std::string const&) const */

void __thiscall JamApplier::ChangeMusicGenre(JamApplier *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = getMusicalJamProps();
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)(lVar2 + 0x10),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(lVar2 + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    pvVar4 = (void *)FUN_0547429c(lVar2 + 8);
    AudioMgr::SetSwitch(pcVar3,"Music_Genre_Eighties",pvVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamApplier::PlayMusicGenreEnterEvent(std::string const&) const */

void __thiscall JamApplier::PlayMusicGenreEnterEvent(JamApplier *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = getMusicalJamProps();
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)(lVar2 + 0x40),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(lVar2 + 0x40));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    AudioMgr::SendEvent(psVar3,(void *)(lVar2 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


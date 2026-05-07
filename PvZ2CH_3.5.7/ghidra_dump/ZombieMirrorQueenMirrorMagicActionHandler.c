// Class: ZombieMirrorQueenMirrorMagicActionHandler


/* ZombieMirrorQueenMirrorMagicActionHandler::onAnimationDone(std::string const&) */

void ZombieMirrorQueenMirrorMagicActionHandler::onAnimationDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenMirrorMagicActionHandler::StaticClassInit() */

void ZombieMirrorQueenMirrorMagicActionHandler::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieMirrorQueenMirrorMagicActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f0af7c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenMirrorMagicActionHandler::StaticGetClass() */

long * ZombieMirrorQueenMirrorMagicActionHandler::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenMirrorMagicActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenMirrorMagicActionHandler::GetClass() const */

long * ZombieMirrorQueenMirrorMagicActionHandler::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenMirrorMagicActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenMirrorMagicActionHandler::setGridPosition(Sexy::Point) */

void __thiscall
ZombieMirrorQueenMirrorMagicActionHandler::setGridPosition
          (ZombieMirrorQueenMirrorMagicActionHandler *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x24) = *param_2;
  return;
}


/* ZombieMirrorQueenMirrorMagicActionHandler::ZombieMirrorQueenMirrorMagicActionHandler() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionHandler::ZombieMirrorQueenMirrorMagicActionHandler
          (ZombieMirrorQueenMirrorMagicActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0ee50;
  Sexy::Point::Point((Point *)(this + 0x24),-1,-1);
  return;
}


/* ZombieMirrorQueenMirrorMagicActionHandler::StaticNew() */

ZombieMirrorQueenMirrorMagicActionHandler *
ZombieMirrorQueenMirrorMagicActionHandler::StaticNew(void)

{
  ZombieMirrorQueenMirrorMagicActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombieMirrorQueenMirrorMagicActionHandler(this);
  return this;
}


/* ZombieMirrorQueenMirrorMagicActionHandler::~ZombieMirrorQueenMirrorMagicActionHandler() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionHandler::~ZombieMirrorQueenMirrorMagicActionHandler
          (ZombieMirrorQueenMirrorMagicActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0ee50;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieMirrorQueenMirrorMagicActionHandler::~ZombieMirrorQueenMirrorMagicActionHandler() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionHandler::~ZombieMirrorQueenMirrorMagicActionHandler
          (ZombieMirrorQueenMirrorMagicActionHandler *this)

{
  ~ZombieMirrorQueenMirrorMagicActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenMirrorMagicActionHandler::showMirrorAppearLight() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionHandler::showMirrorAppearLight
          (ZombieMirrorQueenMirrorMagicActionHandler *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar6;
  long *plVar7;
  int local_34 [2];
  int local_2c;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  BoardEntity::CalcGridPosition();
  local_34[0] = *(int *)(this + 0x28) - local_2c;
  uVar3 = FUN_04f0b268(DAT_06ba4f78);
  uVar4 = FUN_04f0b218(DAT_06ba4f80);
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                       (uVar3,uVar4,local_34);
  local_18 = FUN_04f0b268(DAT_06ba4f78);
  iVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18._4_4_ = (float)((ulong)*puVar5 >> 0x20);
  local_10 = *(undefined4 *)(puVar5 + 1);
  local_18 = CONCAT44(local_18._4_4_ - 40.0,(int)*puVar5);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBIE_MIRROR_QUEEN_MIRROR_LIGHT");
  GetPAMByName(asStack_28);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  plVar7 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  iVar2 = (**(code **)(*plVar7 + 0x170))();
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,iVar2 + 1);
  Sexy::StrFormat("mirror_light%d",(__normal_iterator *)&local_20,(ulong)(iVar1 + 1));
  Effect_PopAnim::PlaySingleAnimation(this_01,(__normal_iterator *)&local_20,0);
  std::string::~string((string *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenMirrorMagicActionHandler::onStartAction() */

void __thiscall
ZombieMirrorQueenMirrorMagicActionHandler::onStartAction
          (ZombieMirrorQueenMirrorMagicActionHandler *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar4;
  undefined8 *puVar5;
  GridItemZombieMirrorQueenMirror *this_01;
  long lVar6;
  RtObject *pRVar7;
  Board *this_02;
  code *pcVar8;
  undefined8 local_d8;
  undefined8 local_d0;
  RtId aRStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pcVar8 = *(code **)(*(long *)pZVar4 + 0x170);
  FUN_04f05f68((string *)&local_d8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_d0);
  std::string::string(asStack_68,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,aRStack_c8,
             asStack_68);
  (*pcVar8)(pZVar4,(string *)&local_d8,0,aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_b0);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
  std::string::~string((string *)&local_d8);
  showMirrorAppearLight(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_c8);
  uVar3 = operator|(1,4);
  EntityFinder::GetEntitiesAtGridSquare
            (aRStack_c8,uVar3,*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x28));
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_c8);
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    pRVar7 = (RtObject *)*puVar5;
    pcVar8 = *(code **)(*(long *)pRVar7 + 0x120);
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    (*pcVar8)(pRVar7,asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar7);
    if ((bVar1) && (cVar2 = GameObject::IsDestroyed((GameObject *)pRVar7), cVar2 == '\0')) {
      (**(code **)(*(long *)pRVar7 + 0x48))(pRVar7);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
  }
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_68,"zombie_mirror_queen_mirror");
  pRVar7 = (RtObject *)
           Board::AddGridItem(this_02,asStack_68,*(int *)(this + 0x24),*(int *)(this + 0x28),1);
  this_01 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenMirror>(pRVar7);
  std::string::~string(asStack_68);
  nop();
  pcVar8 = *(code **)(*(long *)this_01 + 0x198);
  lVar6 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  uVar3 = FUN_04f05d28(*(undefined4 *)(lVar6 + 0x50));
  (*pcVar8)(this_01,uVar3);
  GridItemZombieMirrorQueenMirror::refreshStats(this_01);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


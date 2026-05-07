// Class: PlantWarsZombieSkillCard


/* PlantWarsZombieSkillCard::~PlantWarsZombieSkillCard() */

void __thiscall PlantWarsZombieSkillCard::~PlantWarsZombieSkillCard(PlantWarsZombieSkillCard *this)

{
  *(undefined ***)this = &PTR_GetClass_069bc740;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsZombieSkillCard::~PlantWarsZombieSkillCard() */

void __thiscall PlantWarsZombieSkillCard::~PlantWarsZombieSkillCard(PlantWarsZombieSkillCard *this)

{
  ~PlantWarsZombieSkillCard(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsZombieSkillCard::PlantWarsZombieSkillCard() */

void __thiscall PlantWarsZombieSkillCard::PlantWarsZombieSkillCard(PlantWarsZombieSkillCard *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069bc740;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  this[0xd8] = (PlantWarsZombieSkillCard)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  return;
}


/* PlantWarsZombieSkillCard::OnClick() */

void __thiscall PlantWarsZombieSkillCard::OnClick(PlantWarsZombieSkillCard *this)

{
  PlantWarsZombieDetails::SelectZombieSkillCard
            (*(PlantWarsZombieDetails **)(this + 0xf8),*(int *)(this + 0xdc));
  return;
}


/* PlantWarsZombieSkillCard::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantWarsZombieSkillCard::TouchEnded(PlantWarsZombieSkillCard *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  OnClick(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieSkillCard::Init(PlantWarsZombieDetails*, int, std::string const&) */

void __thiscall
PlantWarsZombieSkillCard::Init
          (PlantWarsZombieSkillCard *this,PlantWarsZombieDetails *param_1,int param_2,
          string *param_3)

{
  PlantWarsNetworkMgr *pPVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xdc) = param_2;
  *(PlantWarsZombieDetails **)(this + 0xf8) = param_1;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetTitleIconImage(pPVar1,param_3);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  *(ResourceInfo **)(this + 0xe0) = pRVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pPVar1 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetTitleName(pPVar1,param_3);
  FUN_054766c8(this + 0xe8,aRStack_10);
  FUN_05476c50(aRStack_10);
  pPVar1 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetTitleDescription(pPVar1,param_3);
  FUN_054766c8(this + 0xf0,aRStack_10);
  FUN_05476c50(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsZombieSkillCard::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsZombieSkillCard::Draw(PlantWarsZombieSkillCard *this,Graphics *param_1)

{
  Image *pIVar1;
  
  if (*(Image **)(this + 0xe0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xd8] == (PlantWarsZombieSkillCard)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b991c8);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


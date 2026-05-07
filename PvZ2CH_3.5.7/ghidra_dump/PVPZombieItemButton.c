// Class: PVPZombieItemButton


/* PVPZombieItemButton::~PVPZombieItemButton() */

void __thiscall PVPZombieItemButton::~PVPZombieItemButton(PVPZombieItemButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06951bb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* PVPZombieItemButton::~PVPZombieItemButton() */

void __thiscall PVPZombieItemButton::~PVPZombieItemButton(PVPZombieItemButton *this)

{
  ~PVPZombieItemButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieItemButton::DrawItemComponse(Sexy::Graphics*, Sexy::TRect<int>, Sexy::Point,
   Sexy::Point) */

void __thiscall
PVPZombieItemButton::DrawItemComponse
          (PVPZombieItemButton *this,Graphics *param_1,TRect *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ResourceInfo *pRVar9;
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0xc);
  local_8 = ___stack_chk_guard;
  iVar7 = FUN_04afce4c(10);
  iVar3 = *param_5;
  iVar4 = *(int *)(this + 0x54);
  iVar5 = *param_4;
  iVar8 = FUN_04afce4c(0xf);
  iVar6 = param_5[1];
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                     ((RtWeakPtr *)(*(long *)(this + 0x1a0) + 0x170));
  if (pRVar9 != (ResourceInfo *)0x0) {
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                       ((RtWeakPtr *)(*(long *)(this + 0x1a0) + 0x170));
    Sexy::Insets::Insets
              (aIStack_18,
               (int)((((float)iVar3 + (float)iVar5) - (float)iVar1 * 0.15) + (float)iVar7),
               ((iVar4 - (int)((float)iVar2 * 1.3)) - iVar8) + iVar6,(int)((float)iVar1 * 1.3),
               (int)((float)iVar2 * 1.3));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(TRect *)aIStack_18,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieItemButton::drawZombie(Sexy::Graphics*) */

void __thiscall PVPZombieItemButton::drawZombie(PVPZombieItemButton *this,Graphics *param_1)

{
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a8] == (PVPZombieItemButton)0x0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 0x20));
    Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x30));
  }
  else {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 0x68));
    Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x78));
    Sexy::Point::Point(aPStack_20,0,0);
    DrawItemComponse(this,param_1,aIStack_18,aPStack_28,aPStack_20);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 0x128));
    Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x138));
  }
  Sexy::Point::Point(aPStack_20,0,0);
  DrawItemComponse(this,param_1,aIStack_18,aPStack_28,aPStack_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 8));
  Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x18));
  Sexy::Point::Point(aPStack_20,0,0);
  DrawItemComponse(this,param_1,aIStack_18,aPStack_28,aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieItemButton::Draw(Sexy::Graphics*) */

void __thiscall PVPZombieItemButton::Draw(PVPZombieItemButton *this,Graphics *param_1)

{
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this[0x1a8] == (PVPZombieItemButton)0x0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 0x20));
    Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x30));
  }
  else {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 0x68));
    Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x78));
    Sexy::Point::Point(aPStack_20,0,0);
    DrawItemComponse(this,param_1,aIStack_18,aPStack_28,aPStack_20);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 0x128));
    Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x138));
  }
  Sexy::Point::Point(aPStack_20,0,0);
  DrawItemComponse(this,param_1,aIStack_18,aPStack_28,aPStack_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(*(long *)(this + 0x1a0) + 8));
  Sexy::Point::Point(aPStack_28,(TPoint *)(*(long *)(this + 0x1a0) + 0x18));
  Sexy::Point::Point(aPStack_20,0,0);
  DrawItemComponse(this,param_1,aIStack_18,aPStack_28,aPStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieItemButton::PVPZombieItemButton(int, Sexy::ButtonListener*,
   Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall
PVPZombieItemButton::PVPZombieItemButton
          (PVPZombieItemButton *this,int param_1,ButtonListener *param_2,RtWeakPtr *param_4)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  SeedPacketUtils *this_01;
  long lVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06951bb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x1a8] = (PVPZombieItemButton)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_4);
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_10,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
  uVar2 = SeedPacketUtils::GetZombiePacketRenderData(this_01,(string *)(lVar1 + 8),asStack_10,-1);
  *(undefined8 *)(this + 0x1a0) = uVar2;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


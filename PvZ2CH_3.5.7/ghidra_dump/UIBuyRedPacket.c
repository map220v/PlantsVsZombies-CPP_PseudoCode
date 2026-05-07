// Class: UIBuyRedPacket


/* UIBuyRedPacket::~UIBuyRedPacket() */

void __thiscall UIBuyRedPacket::~UIBuyRedPacket(UIBuyRedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_067ffa10;
  s_pBuyWidgetHandler = 0;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIBuyRedPacket::~UIBuyRedPacket() */

void __thiscall UIBuyRedPacket::~UIBuyRedPacket(UIBuyRedPacket *this)

{
  ~UIBuyRedPacket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBuyRedPacket::Initialize() */

void __thiscall UIBuyRedPacket::Initialize(UIBuyRedPacket *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (m_eventType == 0) {
    std::string::string(asStack_10,"UIBuyRedPacket");
    DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  else if (m_eventType == 1) {
    std::string::string(asStack_10,"UIBuyDumpling");
    DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBuyRedPacket::UIBuyRedPacket() */

void __thiscall UIBuyRedPacket::UIBuyRedPacket(UIBuyRedPacket *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_067ffa10;
  return;
}


/* UIBuyRedPacket::create(bool, FestivalEventType) */

UIBuyRedPacket * UIBuyRedPacket::create(undefined1 param_1,undefined4 param_2)

{
  UIBuyRedPacket *this;
  
  if (s_pBuyWidgetHandler != (UIBuyRedPacket *)0x0) {
    return s_pBuyWidgetHandler;
  }
  this = ::operator_new(0x138);
  memset(this,0,0x138);
  UIBuyRedPacket(this);
  m_eventType = param_2;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pBuyWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBuyRedPacket::AdjustInnerUI(int, int) */

void __thiscall UIBuyRedPacket::AdjustInnerUI(UIBuyRedPacket *this,int param_1,int param_2)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"root/detail_group/detail_pattern4");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x110);
    fVar4 = (float)(**(code **)(*(long *)pDVar2 + 0x1c0))(pDVar2);
    fVar5 = (float)(**(code **)(*(long *)pDVar2 + 0x1c8))(pDVar2);
    (*pcVar3)(fVar4 - (float)param_1,fVar5 - (float)param_2,pDVar2);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"root/detail_group/detail_pattern5");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x110);
    fVar4 = (float)(**(code **)(*(long *)pDVar2 + 0x1c0))(pDVar2);
    fVar5 = (float)(**(code **)(*(long *)pDVar2 + 0x1c8))(pDVar2);
    (*pcVar3)(fVar4 - (float)param_1,fVar5 - (float)param_2,pDVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBuyRedPacket::UserInit() */

void __thiscall UIBuyRedPacket::UserInit(UIBuyRedPacket *this)

{
  exception_ptr *peVar1;
  DTouchLayer *pDVar2;
  char *pcVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *pPVar7;
  int *piVar8;
  code *pcVar9;
  int local_40 [2];
  undefined4 local_38 [4];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (m_eventType == 0) {
    peVar1 = (exception_ptr *)(this + 0xd8);
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"root/detail_group/menu/btnSmallRedPack");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      pcVar9 = *(code **)(*(long *)pDVar5 + 0x350);
      FUN_041bcec8(afStack_28,this);
      (*pcVar9)(pDVar5,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"root/detail_group/menu/btnBigRedPack");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      pcVar9 = *(code **)(*(long *)pDVar5 + 0x350);
      FUN_041bcf24(afStack_28,this);
      (*pcVar9)(pDVar5,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    std::string::string((string *)local_38,"mat_new_redpacket");
    local_40[0] = PlayerInfo::GetMaterialNum(pPVar7,(string *)local_38);
    std::string::~string((string *)local_38);
    nop();
    local_38[0] = 0;
    piVar8 = eastl::max_alt<int>(local_40,(int *)local_38);
    local_40[0] = *piVar8;
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"smallRedPackCount");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      std::string::string((string *)local_38,"RedPackCountText");
      pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar5);
      std::string::~string((string *)local_38);
      nop();
      if (pDVar2 != (DTouchLayer *)0x0) {
        pcVar9 = *(code **)(*(long *)pDVar2 + 0x338);
        DString::Format(&DAT_05623828,(string *)local_38,1);
        pcVar3 = DString::operator_cast_to_char_((DString *)local_38);
        (*pcVar9)(pDVar2,pcVar3);
        DString::~DString((DString *)local_38);
      }
      (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
    }
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"bigRedPackCount");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      std::string::string((string *)local_38,"RedPackCountText");
      pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar5);
      std::string::~string((string *)local_38);
      nop();
      if (pDVar2 != (DTouchLayer *)0x0) {
        pcVar9 = *(code **)(*(long *)pDVar2 + 0x338);
        DString::Format(&DAT_05623828,(string *)local_38,0xf);
        pcVar3 = DString::operator_cast_to_char_((DString *)local_38);
        (*pcVar9)(pDVar2,pcVar3);
        DString::~DString((DString *)local_38);
      }
      (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
    }
  }
  else if (m_eventType == 1) {
    peVar1 = (exception_ptr *)(this + 0xd8);
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"root/detail_group/menu/btnSmallDumpling");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      pcVar9 = *(code **)(*(long *)pDVar5 + 0x350);
      FUN_041bcf80(afStack_28,this);
      (*pcVar9)(pDVar5,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"root/detail_group/menu/btnBigDumpling");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      pcVar9 = *(code **)(*(long *)pDVar5 + 0x350);
      FUN_041bcfdc(afStack_28,this);
      (*pcVar9)(pDVar5,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    std::string::string((string *)local_38,"mat_new_dumpling");
    local_40[0] = PlayerInfo::GetMaterialNum(pPVar7,(string *)local_38);
    std::string::~string((string *)local_38);
    nop();
    local_38[0] = 0;
    piVar8 = eastl::max_alt<int>(local_40,(int *)local_38);
    local_40[0] = *piVar8;
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"smallDumplingCount");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
      std::string::string((string *)local_38,"DumplingCountText");
      DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar5);
      std::string::~string((string *)local_38);
      nop();
    }
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)local_38,"bigDumplingCount");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
    std::string::~string((string *)local_38);
    nop();
    if (pDVar5 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
      std::string::string((string *)local_38,"DumplingCountText");
      DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar5);
      std::string::~string((string *)local_38);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


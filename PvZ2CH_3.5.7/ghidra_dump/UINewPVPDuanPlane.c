// Class: UINewPVPDuanPlane


/* UINewPVPDuanPlane::CalculateStarNumOfCurrentSmallDuan() */

undefined4 __thiscall UINewPVPDuanPlane::CalculateStarNumOfCurrentSmallDuan(UINewPVPDuanPlane *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = *(undefined8 *)(this + 0xd8);
  uVar1 = FUN_0352d878(uVar4,*(undefined8 *)(this + 0xe0));
  fVar5 = *(float *)(this + 0x108);
  if (fVar5 < (float)uVar1) {
    fVar6 = *(float *)(this + 0x10c);
    lVar3 = (long)fVar6;
    puVar2 = (undefined8 *)FUN_0352d7ec(uVar4,lVar3);
    uVar1 = FUN_0352d88c(*puVar2,puVar2[1]);
    if (fVar6 < (float)uVar1) {
      puVar2 = (undefined8 *)FUN_0352d7ec(uVar4,(long)fVar5);
      lVar3 = FUN_0352d7f8(*puVar2,lVar3);
      return *(undefined4 *)(lVar3 + 8);
    }
  }
  return 0;
}


/* UINewPVPDuanPlane::CalculateSmallDuanNumOfBigDuan(int) */

void __thiscall
UINewPVPDuanPlane::CalculateSmallDuanNumOfBigDuan(UINewPVPDuanPlane *this,int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0352d7ec(*(undefined8 *)(this + 0xd8),(long)param_1);
  FUN_0352d88c(*puVar1,puVar1[1]);
  return;
}


/* UINewPVPDuanPlane::IsTopBigDuan(int) */

bool __thiscall UINewPVPDuanPlane::IsTopBigDuan(UINewPVPDuanPlane *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0352d878(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  return lVar1 + -1 == (long)param_1;
}


/* UINewPVPDuanPlane::IsFull() */

bool __thiscall UINewPVPDuanPlane::IsFull(UINewPVPDuanPlane *this)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  
  lVar2 = FUN_0352d878(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  bVar1 = false;
  if (*(float *)(this + 0x108) == (float)(lVar2 - 1)) {
    fVar4 = *(float *)(this + 0x10c);
    puVar3 = (undefined8 *)
             std::
             vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                     *)(this + 0xd8));
    lVar2 = FUN_0352d88c(*puVar3,puVar3[1]);
    bVar1 = fVar4 == (float)(lVar2 - 1);
  }
  return bVar1;
}


/* UINewPVPDuanPlane::~UINewPVPDuanPlane() */

void __thiscall UINewPVPDuanPlane::~UINewPVPDuanPlane(UINewPVPDuanPlane *this)

{
  *(undefined ***)this = &PTR_GetClass_066518b0;
  std::
  vector<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>,std::allocator<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>>>
  ::~vector((vector<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>,std::allocator<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>>>
             *)(this + 0xf0));
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::~vector((vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
             *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UINewPVPDuanPlane::~UINewPVPDuanPlane() */

void __thiscall UINewPVPDuanPlane::~UINewPVPDuanPlane(UINewPVPDuanPlane *this)

{
  ~UINewPVPDuanPlane(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanPlane::Init(std::vector<std::vector<NewPVPSmallDuan, std::allocator<NewPVPSmallDuan>
   >, std::allocator<std::vector<NewPVPSmallDuan, std::allocator<NewPVPSmallDuan> > > >,
   Sexy::SexyVector3) */

void UINewPVPDuanPlane::Init
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               vector *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  NewPVPSmallDuan *pNVar6;
  UINewPVPDuanItem *this;
  vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *this_00;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  NewPVPSmallDuan aNStack_78 [56];
  UINewPVPDuanItem *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined1 *)((long)param_4 + 0x59) = 0;
  iVar12 = 100;
  uVar13 = 0;
  local_90 = param_1;
  local_8c = param_2;
  local_88 = param_3;
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::operator=((vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
               *)(param_4 + 0x1b),param_5);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x21),(SexyVector3 *)&local_90);
  uVar2 = FUN_0352e078(0x50);
  uVar3 = FUN_0352e078(200);
  iVar4 = FUN_0352e078(100);
  lVar5 = FUN_0352d878(param_4[0x1b],param_4[0x1c]);
  iVar1 = 100;
  if (lVar5 != 0) {
    do {
      iVar12 = iVar1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_40);
      std::
      vector<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>,std::allocator<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>>>
      ::push_back((vector<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>,std::allocator<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>>>
                   *)(param_4 + 0x1e),(vector *)local_40);
      std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
                ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_40);
      uVar9 = 0;
      while( true ) {
        lVar5 = param_4[0x1b];
        puVar7 = (undefined8 *)FUN_0352d7ec(lVar5,uVar13);
        uVar11 = *puVar7;
        uVar8 = FUN_0352d88c(uVar11,puVar7[1]);
        if (uVar8 <= uVar9) break;
        pNVar6 = (NewPVPSmallDuan *)FUN_0352d7f8(uVar11,uVar9);
        NewPVPSmallDuan::NewPVPSmallDuan(aNStack_78,pNVar6);
        this = ::operator_new(0x118);
        UINewPVPDuanItem::UINewPVPDuanItem(this);
        (**(code **)(*(long *)this + 0x198))(this,iVar12,0,uVar2,uVar3);
        pcVar10 = *(code **)(*(long *)this + 0x310);
        NewPVPSmallDuan::NewPVPSmallDuan((NewPVPSmallDuan *)local_40,aNStack_78);
        (*pcVar10)(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_40);
        NewPVPSmallDuan::~NewPVPSmallDuan((NewPVPSmallDuan *)local_40);
        (**(code **)(*param_4 + 0x60))(param_4,this);
        iVar12 = iVar12 + iVar4 + *(int *)(this + 0x50);
        this_00 = (vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)
                  FUN_0352d864(param_4[0x1e],uVar13);
        local_40[0] = this;
        std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                  (this_00,(Widget **)local_40);
        NewPVPSmallDuan::~NewPVPSmallDuan(aNStack_78);
        uVar9 = uVar9 + 1;
      }
      uVar13 = uVar13 + 1;
      uVar9 = FUN_0352d878(lVar5,param_4[0x1c]);
      iVar1 = iVar12;
    } while (uVar13 < uVar9);
  }
  *(int *)(param_4 + 10) = iVar12;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanPlane::UINewPVPDuanPlane(std::vector<std::vector<NewPVPSmallDuan,
   std::allocator<NewPVPSmallDuan> >, std::allocator<std::vector<NewPVPSmallDuan,
   std::allocator<NewPVPSmallDuan> > > >, Sexy::SexyVector3) */

void __thiscall
UINewPVPDuanPlane::UINewPVPDuanPlane
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,UINewPVPDuanPlane *this,
          vector *param_5)

{
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066518b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x108),1.0,1.0,0.0);
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::vector(avStack_20,param_5);
  Init(param_1,param_2,param_3,this,avStack_20);
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanPlane::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPDuanPlane::Draw(UINewPVPDuanPlane *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  ulong uVar13;
  string *extraout_x1;
  float fVar14;
  float local_60 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38 [2];
  int local_30;
  int local_28 [2];
  int local_20;
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar7 = (undefined8 *)FUN_0352d864(*(undefined8 *)(this + 0xf0),0);
  plVar8 = (long *)FUN_0352d870(*puVar7,0);
  iVar6 = *(int *)(*plVar8 + 0x48);
  iVar5 = *(int *)(*plVar8 + 0x50) / 2;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)std::
               vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                       *)(this + 0xf0));
  plVar8 = (long *)std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::back(this_00);
  puVar7 = (undefined8 *)FUN_0352d864(*(undefined8 *)(this + 0xf0),0);
  plVar9 = (long *)FUN_0352d870(*puVar7,0);
  iVar1 = *(int *)(*plVar9 + 0x48);
  iVar2 = *(int *)(*plVar8 + 0x48);
  iVar4 = FUN_0352e078(0x14);
  Sexy::Insets::Insets((Insets *)&local_58,iVar5 + iVar6,iVar5,iVar2 - iVar1,iVar4);
  iVar5 = FUN_0352e078(3);
  iVar6 = FUN_0352e078(6);
  Sexy::Insets::Insets
            ((Insets *)&local_48,local_58 + iVar5,iVar5 + local_54,local_50 - iVar6,local_4c - iVar6
            );
  std::string::string((string *)local_18,"IMAGE_UI_NEW_PVP_DUAN_METER");
  uVar10 = StringHelper::ToImage((string *)local_18,true);
  std::string::~string((string *)local_18);
  nop();
  std::string::string((string *)local_18,"IMAGE_UI_NEW_PVP_DUAN_FILL");
  uVar11 = StringHelper::ToImage((string *)local_18,true);
  std::string::~string((string *)local_18);
  nop();
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_58);
  Draw3SliceImage(param_1,(string *)local_18,uVar10);
  puVar7 = (undefined8 *)FUN_0352d864(*(undefined8 *)(this + 0xf0),(long)*(float *)(this + 0x108));
  puVar7 = (undefined8 *)FUN_0352d870(*puVar7,(long)*(float *)(this + 0x10c));
  (**(code **)(*(long *)*puVar7 + 0x48))(local_38,(long *)*puVar7);
  iVar5 = FUN_0352e078(100);
  iVar6 = FUN_0352e078(0x14);
  Sexy::Insets::Insets
            ((Insets *)local_28,local_38[0] + (local_30 / 5) * 4,local_44,iVar5 + (local_30 / 5) * 2
             ,iVar6);
  fVar14 = *(float *)(this + 0x110);
  iVar5 = CalculateStarNumOfCurrentSmallDuan(this);
  local_60[0] = (float)local_40;
  local_18[0] = ((float)local_28[0] - (float)local_48) + ((float)local_20 * fVar14) / (float)iVar5;
  pfVar12 = eastl::min_alt<float>(local_60,local_18);
  local_40 = (int)*pfVar12;
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_48);
  Draw3SliceImage(param_1,(string *)local_18,uVar11);
  cVar3 = IsFull(this);
  if (cVar3 == '\0') {
    fVar14 = *(float *)(this + 0x110);
    uVar13 = CalculateStarNumOfCurrentSmallDuan(this);
    Sexy::StrFormat("%d/%d",(string *)local_18,(ulong)(uint)(int)fVar14,uVar13 & 0xffffffff);
    Sexy::ToSexyString((Sexy *)local_18,extraout_x1);
    std::string::~string((string *)local_18);
    uVar10 = PrimeText_Game::Typeface_FZCuYuan_16_Outline;
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_1,local_60,(Insets *)local_28,uVar10,(string *)local_18,5,1);
    FUN_05476c50(local_60);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


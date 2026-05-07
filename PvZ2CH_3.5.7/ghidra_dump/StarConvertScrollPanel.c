// Class: StarConvertScrollPanel


/* StarConvertScrollPanel::~StarConvertScrollPanel() */

void __thiscall StarConvertScrollPanel::~StarConvertScrollPanel(StarConvertScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06937cb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<StarConvertObject*,std::allocator<StarConvertObject*>>::~vector
            ((vector<StarConvertObject*,std::allocator<StarConvertObject*>> *)(this + 0x100));
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* StarConvertScrollPanel::~StarConvertScrollPanel() */

void __thiscall StarConvertScrollPanel::~StarConvertScrollPanel(StarConvertScrollPanel *this)

{
  ~StarConvertScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertScrollPanel::GetObjectByName(std::string const&) */

void __thiscall
StarConvertScrollPanel::GetObjectByName(StarConvertScrollPanel *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x100);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04a676c4(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertScrollPanel::InitView() */

void __thiscall StarConvertScrollPanel::InitView(StarConvertScrollPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ProfileMgr *this_00;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  StarConvertObject *pSVar13;
  string *psVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 local_80;
  undefined8 local_78;
  StarConvertObject *local_70;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  Insets aIStack_58 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_48 [24];
  ConvertObject aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_68);
  iVar6 = FUN_04a64e50(10);
  iVar3 = iVar6 * 2;
  iVar7 = FUN_04a64e50(0x96);
  iVar1 = iVar7 + iVar6;
  iVar8 = FUN_04a64e50(0xb4);
  *(int *)(this + 0x54) = iVar3;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = (*(int *)(this + 0xdc) - iVar6) / iVar1;
  }
  iVar15 = (int)((double)((*(int *)(this + 0xdc) - iVar1 * iVar4) - iVar6) * 0.4347826086956522);
  iVar9 = FUN_04a64e50(5);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar10 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar10 != 0) {
    iVar19 = 0;
    iVar18 = 0;
    LawnApp::GetStarConvertConfig(gLawnApp);
    StarConvertConfig::GetConvertList();
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_48);
    uVar12 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_48);
    std::
    sort<__gnu_cxx::__normal_iterator<ConvertObject*,std::vector<ConvertObject,std::allocator<ConvertObject>>>,bool(*)(ConvertObject_const&,ConvertObject_const&)>
              (uVar11,uVar12,sortByStarReq);
    std::vector<StarConvertObject*,std::allocator<StarConvertObject*>>::clear
              ((vector<StarConvertObject*,std::allocator<StarConvertObject*>> *)(this + 0x100));
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_48);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_48);
    iVar2 = iVar6 * 3 + iVar8;
    while (bVar5 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar5)
    {
      psVar14 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      bVar5 = std::operator!=("Plant",psVar14);
      if ((bVar5) && (bVar5 = std::operator!=("Feature",psVar14), bVar5)) {
        bVar5 = std::operator!=("Avatar",psVar14);
        if (!bVar5) {
          if (iVar19 != iVar4) goto LAB_04a6a30c;
LAB_04a6a448:
          iVar20 = iVar6 + iVar15;
          iVar18 = iVar18 + 1;
          iVar16 = iVar9 + iVar18 * iVar2;
          iVar17 = iVar16 + iVar6;
LAB_04a6a46c:
          iVar19 = 0;
          local_60 = *(int *)(this + 0xdc) + iVar6;
          local_68 = 0;
          local_64 = iVar16;
          local_5c = iVar2;
          std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                    ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0xe8),
                     (TRect *)&local_68);
          goto LAB_04a6a334;
        }
      }
      else {
        if (iVar19 == iVar4) goto LAB_04a6a448;
LAB_04a6a30c:
        iVar20 = iVar15 + iVar19 * iVar1 + iVar6;
        iVar16 = iVar9 + iVar18 * iVar2;
        iVar17 = iVar16 + iVar6;
        if (iVar19 == 0) goto LAB_04a6a46c;
LAB_04a6a334:
        Sexy::Insets::Insets(aIStack_58,iVar20,iVar17,iVar7,iVar8);
        ConvertObject::ConvertObject(aCStack_30,(ConvertObject *)psVar14);
        pSVar13 = ::operator_new(0x1e8);
        StarConvertObject::StarConvertObject(pSVar13,aCStack_30);
        local_70 = pSVar13;
        ConvertObject::~ConvertObject(aCStack_30);
        if (local_70 != (StarConvertObject *)0x0) {
          iVar19 = iVar19 + 1;
          (**(code **)(*(long *)local_70 + 0x1a0))(local_70,aIStack_58);
          StarConvertObject::InitView(local_70);
          (**(code **)(*(long *)this + 0x60))(this,local_70);
          std::vector<StarConvertObject*,std::allocator<StarConvertObject*>>::push_back
                    ((vector<StarConvertObject*,std::allocator<StarConvertObject*>> *)(this + 0x100)
                     ,&local_70);
          *(int *)(this + 0x54) = iVar3 + iVar17 + iVar8;
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_80);
    }
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar3;
    std::vector<ConvertObject,std::allocator<ConvertObject>>::~vector
              ((vector<ConvertObject,std::allocator<ConvertObject>> *)avStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvertScrollPanel::StarConvertScrollPanel(Sexy::TRect<int>&) */

void __thiscall
StarConvertScrollPanel::StarConvertScrollPanel(StarConvertScrollPanel *this,TRect *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06937cb0;
  Sexy::Insets::Insets((Insets *)(this + 0xd4),(Insets *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::clear
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0xe8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}


/* StarConvertScrollPanel::Draw(Sexy::Graphics*) */

void __thiscall StarConvertScrollPanel::Draw(StarConvertScrollPanel *this,Graphics *param_1)

{
  if (this[0x6c] == (StarConvertScrollPanel)0x0) {
    return;
  }
  nop();
  return;
}


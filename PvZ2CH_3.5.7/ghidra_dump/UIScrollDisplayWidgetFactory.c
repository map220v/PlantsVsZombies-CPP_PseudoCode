// Class: UIScrollDisplayWidgetFactory


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollDisplayWidgetFactory::CreateWidget(int) */

void UIScrollDisplayWidgetFactory::CreateWidget(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  TourismOctoberDisplayWidget *this;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  if (((DAT_06b93868 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b93868), iVar1 != 0)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)&DAT_06b93810);
    __cxa_guard_release(&DAT_06b93868);
    __cxa_atexit(std::
                 map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                 ::~map,&DAT_06b93810,&DAT_06a88000);
  }
  local_c = 0x2a86;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 0;
  local_c = 0x2a53;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 1;
  local_c = 0x2a4c;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 2;
  local_c = 0x2a5b;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 3;
  local_c = 0x2a63;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 4;
  local_c = 0x2a61;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 5;
  local_c = 0x2a6f;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 6;
  local_c = 0x2a77;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 7;
  local_c = 0x2a76;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 8;
  local_c = 0x2a79;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 9;
  local_c = 0x2a88;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 10;
  local_c = 0x2a8b;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 0xb;
  local_c = 0x2a8c;
  puVar2 = (undefined4 *)
           std::
           map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
           ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                         *)&DAT_06b93810,&local_c);
  *puVar2 = 0xc;
  piVar3 = (int *)std::
                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                  ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                *)&DAT_06b93810,local_14);
  if (*piVar3 == 1) {
    piVar3 = (int *)std::
                    map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                    ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                  *)&DAT_06b93810,local_14);
    iVar1 = *piVar3;
    this = ::operator_new(0x100);
    FestivalEventDisplayWidget::FestivalEventDisplayWidget
              ((FestivalEventDisplayWidget *)this,iVar1,local_14[0]);
  }
  else {
    piVar3 = (int *)std::
                    map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                    ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                  *)&DAT_06b93810,local_14);
    if (*piVar3 == 2) {
      piVar3 = (int *)std::
                      map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                      ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                    *)&DAT_06b93810,local_14);
      iVar1 = *piVar3;
      this = ::operator_new(0x108);
      SevenDayGuideDisplayWidget::SevenDayGuideDisplayWidget
                ((SevenDayGuideDisplayWidget *)this,iVar1,local_14[0]);
    }
    else {
      piVar3 = (int *)std::
                      map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                      ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                    *)&DAT_06b93810,local_14);
      if (*piVar3 == 3) {
        piVar3 = (int *)std::
                        map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                        ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                      *)&DAT_06b93810,local_14);
        iVar1 = *piVar3;
        this = ::operator_new(0x100);
        PennyClassroomDisplayWidget::PennyClassroomDisplayWidget
                  ((PennyClassroomDisplayWidget *)this,iVar1,local_14[0]);
      }
      else {
        piVar3 = (int *)std::
                        map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                        ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                      *)&DAT_06b93810,local_14);
        if (*piVar3 == 5) {
          piVar3 = (int *)std::
                          map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                          ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                        *)&DAT_06b93810,local_14);
          iVar1 = *piVar3;
          this = ::operator_new(0x120);
          UnchartedModeDisplayWidget::UnchartedModeDisplayWidget
                    ((UnchartedModeDisplayWidget *)this,iVar1,local_14[0]);
        }
        else {
          piVar3 = (int *)std::
                          map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                          ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                        *)&DAT_06b93810,local_14);
          if (*piVar3 == 4) {
            piVar3 = (int *)std::
                            map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                            ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                          *)&DAT_06b93810,local_14);
            iVar1 = *piVar3;
            this = ::operator_new(0x100);
            BattleOrderDisplayWidget::BattleOrderDisplayWidget
                      ((BattleOrderDisplayWidget *)this,iVar1,local_14[0]);
          }
          else {
            piVar3 = (int *)std::
                            map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                            ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                          *)&DAT_06b93810,local_14);
            if (*piVar3 == 6) {
              piVar3 = (int *)std::
                              map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                              ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                            *)&DAT_06b93810,local_14);
              iVar1 = *piVar3;
              this = ::operator_new(0x100);
              CornucopiaDisplayWidget::CornucopiaDisplayWidget
                        ((CornucopiaDisplayWidget *)this,iVar1,local_14[0]);
            }
            else {
              piVar3 = (int *)std::
                              map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                              ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                            *)&DAT_06b93810,local_14);
              if (*piVar3 == 7) {
                piVar3 = (int *)std::
                                map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                              *)&DAT_06b93810,local_14);
                iVar1 = *piVar3;
                this = ::operator_new(0x100);
                PlantCultivateDisplayWidget::PlantCultivateDisplayWidget
                          ((PlantCultivateDisplayWidget *)this,iVar1,local_14[0]);
              }
              else {
                piVar3 = (int *)std::
                                map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                              *)&DAT_06b93810,local_14);
                if (*piVar3 == 8) {
                  piVar3 = (int *)std::
                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                  ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                *)&DAT_06b93810,local_14);
                  iVar1 = *piVar3;
                  this = ::operator_new(0x100);
                  GiftFoReturnDisplayWidget::GiftFoReturnDisplayWidget
                            ((GiftFoReturnDisplayWidget *)this,iVar1,local_14[0]);
                }
                else {
                  piVar3 = (int *)std::
                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                  ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                *)&DAT_06b93810,local_14);
                  if (*piVar3 == 9) {
                    piVar3 = (int *)std::
                                    map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                    ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                    iVar1 = *piVar3;
                    this = ::operator_new(0x100);
                    PartyAssistDisplayWidget::PartyAssistDisplayWidget
                              ((PartyAssistDisplayWidget *)this,iVar1,local_14[0]);
                  }
                  else {
                    piVar3 = (int *)std::
                                    map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                    ::operator[]((map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                    if (*piVar3 == 0) {
                      piVar3 = (int *)std::
                                      map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                      ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                      iVar1 = *piVar3;
                      this = ::operator_new(0x100);
                      LinkageFestivalEventDisplayWidget::LinkageFestivalEventDisplayWidget
                                ((LinkageFestivalEventDisplayWidget *)this,iVar1,local_14[0]);
                    }
                    else {
                      piVar3 = (int *)std::
                                      map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                      ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                      if (*piVar3 == 10) {
                        piVar3 = (int *)std::
                                        map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                        ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                        iVar1 = *piVar3;
                        this = ::operator_new(0x100);
                        PlantWarsDisplayWidget::PlantWarsDisplayWidget
                                  ((PlantWarsDisplayWidget *)this,iVar1,local_14[0]);
                      }
                      else {
                        piVar3 = (int *)std::
                                        map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                        ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                        if (*piVar3 == 0xb) {
                          piVar3 = (int *)std::
                                          map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                          ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                          iVar1 = *piVar3;
                          this = ::operator_new(0x100);
                          AutumnHarvestDisplayWidget::AutumnHarvestDisplayWidget
                                    ((AutumnHarvestDisplayWidget *)this,iVar1,local_14[0]);
                        }
                        else {
                          piVar3 = (int *)std::
                                          map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                          ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                          if (*piVar3 != 0xc) {
                            piVar3 = (int *)std::
                                            map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                            ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                            this = (TourismOctoberDisplayWidget *)0x0;
                            if (*piVar3 != 0xd) goto LAB_04c646f8;
                          }
                          piVar3 = (int *)std::
                                          map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                          ::operator[]((
                                                  map<int,UIScrollDisplayWidgetFactory::WidgetType,std::less<int>,std::allocator<std::pair<int_const,UIScrollDisplayWidgetFactory::WidgetType>>>
                                                  *)&DAT_06b93810,local_14);
                          iVar1 = *piVar3;
                          this = ::operator_new(0x100);
                          TourismOctoberDisplayWidget::TourismOctoberDisplayWidget
                                    (this,iVar1,local_14[0]);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04c646f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


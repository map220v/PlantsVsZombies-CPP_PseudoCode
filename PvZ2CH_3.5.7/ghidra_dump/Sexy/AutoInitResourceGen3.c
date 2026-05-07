// Class: Sexy::AutoInitResourceGen3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AutoInitResourceGen3::AutoInitResourceGen3(std::string const&, Sexy::ResGenInfo const&) */

void __thiscall
Sexy::AutoInitResourceGen3::AutoInitResourceGen3
          (AutoInitResourceGen3 *this,string *param_1,ResGenInfo *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ResGenInfo *this_00;
  ParamCollection *this_01;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (ResourceManagerInfo::sInstance ==
      (map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
       *)0x0) {
    this_01 = ::operator_new(0x30);
    *(undefined4 *)(this_01 + 8) = 0;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(undefined8 *)(this_01 + 0x18) = 0;
    *(undefined8 *)(this_01 + 0x20) = 0;
    *(undefined8 *)(this_01 + 0x28) = 0;
    AndroidGL20RenderEffect::ParamCollection::ParamCollection(this_01);
    ResourceManagerInfo::sInstance =
         (map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
          *)this_01;
  }
  FUN_05475d88(asStack_10,param_1);
  iVar2 = FUN_05474184(asStack_10);
  lVar5 = 0;
  if (0 < iVar2) {
    do {
      while (pcVar3 = (char *)FUN_05474ee8(asStack_10,lVar5), *pcVar3 == '\\') {
        lVar1 = lVar5 + 1;
        puVar4 = (undefined1 *)FUN_05474ee8(asStack_10,lVar5);
        *puVar4 = 0x2f;
        lVar5 = lVar1;
        if (iVar2 <= (int)lVar1) goto LAB_0519f2e4;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar2);
  }
LAB_0519f2e4:
  this_00 = (ResGenInfo *)
            std::
            map<std::string,Sexy::ResGenInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::ResGenInfo>>>
            ::operator[](ResourceManagerInfo::sInstance,asStack_10);
  ResGenInfo::operator=(this_00,param_2);
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// Class: JavaBase


/* JavaBase::~JavaBase() */

void __thiscall JavaBase::~JavaBase(JavaBase *this)

{
  _jobject *p_Var1;
  
  *(undefined ***)this = &PTR__JavaBase_06a33070;
  if (*(long *)(this + 8) != 0) {
    p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
    _JNIEnv::DeleteGlobalRef(p_Var1);
    return;
  }
  return;
}


/* JavaBase::~JavaBase() */

void __thiscall JavaBase::~JavaBase(JavaBase *this)

{
  ~JavaBase(this);
  AK::FreeHook(this);
  return;
}


/* JavaBase::JavaBase() */

void __thiscall JavaBase::JavaBase(JavaBase *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__JavaBase_06a33070;
  return;
}


/* JavaBase::InitJava(_JNIEnv*, JavaClass&, char const*) */

void __thiscall JavaBase::InitJava(JavaBase *this,_JNIEnv *param_1,JavaClass *param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)param_2);
  if (cVar1 == '\0') {
    JavaClass::init(param_2,param_1,param_3);
    cVar1 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)param_2);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x10))(this,param_1,param_2);
      (**(code **)(*(long *)this + 0x18))(this,param_1,param_2);
      return;
    }
  }
  return;
}


/* JavaBase::ConstructJavaObject(_JNIEnv*, JavaClass const&, JavaMethodBase const&, std::__va_list)
    */

void __thiscall
JavaBase::ConstructJavaObject
          (JavaBase *this,_jobject *param_1,JSONCodeTableWriter *param_2,
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *param_3,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  std::
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::_M_root(param_3);
  uVar1 = FUN_0547429c();
  __android_log_print(4,"JavaBase","New %s",uVar1);
  uVar1 = open_vcdiff::JSONCodeTableWriter::target_length(param_2);
  uVar2 = Sexy::ProfileManager::GetListener((ProfileManager *)param_3);
  local_20 = *param_5;
  uStack_18 = param_5[1];
  local_10 = param_5[2];
  uStack_8 = param_5[3];
  lVar3 = _JNIEnv::NewObjectV(param_1,uVar1,uVar2,&local_20);
  if (lVar3 != 0) {
    uVar1 = _JNIEnv::NewGlobalRef(param_1);
    _JNIEnv::DeleteLocalRef(param_1);
    if (*(long *)(this + 8) != 0) {
      __android_log_print(5,"JavaBase","mJavaObject already defined what are you doing!");
      _JNIEnv::DeleteGlobalRef(param_1);
    }
    *(undefined8 *)(this + 8) = uVar1;
    __android_log_print(4,"JavaBase","mJavaObject <- %p",uVar1);
  }
  JavaException::CheckAndClear((_JNIEnv *)param_1);
  return;
}


/* JavaBase::AttachJavaObject(_JNIEnv*, _jobject*) */

void __thiscall JavaBase::AttachJavaObject(JavaBase *this,_JNIEnv *param_1,_jobject *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (_jobject *)0x0) {
    uVar1 = _JNIEnv::NewGlobalRef((_jobject *)param_1);
    if (*(long *)(this + 8) != 0) {
      __android_log_print(5,"JavaBase","mJavaObject already defined what are you doing!");
      _JNIEnv::DeleteGlobalRef((_jobject *)param_1);
    }
    *(undefined8 *)(this + 8) = uVar1;
    __android_log_print(4,"JavaBase","mJavaObject:%p <- AttachJavaObject( localObjectRef:%p )",uVar1
                        ,param_2);
    return;
  }
  return;
}


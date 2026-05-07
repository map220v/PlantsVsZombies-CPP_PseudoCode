// Class: Sexy::CBMemberTranslatorX<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>


/* Sexy::CBMemberTranslatorX<Sexy::AndroidHttpTransaction::ReceivedDataCallback, void
   (Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>::CBMemberTranslatorX(Sexy::AndroidHttpTransaction::ReceivedDataCallback&,
   void (Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()) */

void Sexy::
     CBMemberTranslatorX<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
     ::CBMemberTranslatorX(ReceivedDataCallback *param_1,_func_void *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void **)param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = in_x2;
  *(undefined8 *)(param_1 + 0x10) = in_x3;
  return;
}


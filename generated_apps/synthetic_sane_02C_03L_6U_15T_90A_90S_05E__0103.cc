#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task3Subtask0);
DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU0Task3Subtask11);
DeclareTask(CPU0Task5Subtask2);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task0Subtask5);
DeclareTask(CPU1Task0Subtask7);
DeclareTask(CPU1Task1Subtask12);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  ActivateTask(CPU0Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 92); // 0
  SetEvent(CPU0Task5Subtask2,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 57); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 25); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 26); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 161); // 0
  ActivateTask(CPU0Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 167); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 53); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 157); // 0
  ActivateTask(CPU0Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 158); // 0
  SetEvent(CPU0Task3Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 69); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 96); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 84); // 0
  ActivateTask(CPU1Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 159); // 0
  SetEvent(CPU1Task4Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 166); // 0
  ActivateTask(CPU1Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 68); // 0
  SetEvent(CPU0Task5Subtask4,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 106); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 200); // 0
  SetEvent(CPU1Task0Subtask5,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 28); // 0
  ActivateTask(CPU1Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 138); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 197); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 20); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 42); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  ActivateTask(CPU0Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 191); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 25); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 152); // 0
  TerminateTask();

}

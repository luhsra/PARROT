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


DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU0Task5Subtask2);
DeclareTask(CPU0Task5Subtask8);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task0Subtask3);
DeclareTask(CPU1Task0Subtask5);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU1Task4Subtask4);
DeclareTask(CPU1Task4Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 178); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 139); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 39); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 176); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 29); // 0
  ActivateTask(CPU1Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 129); // 0
  ActivateTask(CPU1Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 16); // 0
  ActivateTask(CPU0Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 62); // 0
  SetEvent(CPU0Task5Subtask8,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 136); // 0
  SetEvent(CPU0Task5Subtask2,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 59); // 0
  ActivateTask(CPU0Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  SetEvent(CPU1Task4Subtask10,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 81); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.9 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 28); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.10 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 43); // 0
  ActivateTask(CPU0Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 95); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 168); // 0
  SetEvent(CPU0Task1Subtask1,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 177); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 26); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 122); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 169); // 0
  ActivateTask(CPU1Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 169); // 0
  ActivateTask(CPU1Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 169); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 102); // 0
  ActivateTask(CPU1Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 131); // 0
  ActivateTask(CPU0Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 13); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 9); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 19); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 14); // 0
  SetEvent(CPU0Task2Subtask11,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 168); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 192); // 0
  TerminateTask();

}

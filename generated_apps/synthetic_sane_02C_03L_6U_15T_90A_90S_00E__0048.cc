#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU0Task4Subtask13);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU1Task2Subtask10);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU1Task5Subtask3);
DeclareTask(CPU1Task5Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 52); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 28); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 133); // 0
  ActivateTask(CPU0Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 132); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 11); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 33); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 128); // 0
  ActivateTask(CPU0Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 90); // 0
  ActivateTask(CPU0Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 136); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 143); // 0
  ActivateTask(CPU1Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 121); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 5); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 156); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 13); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 146); // 0
  ActivateTask(CPU1Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 99); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 136); // 0
  ActivateTask(CPU1Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 190); // 0
  ActivateTask(CPU0Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 161); // 0
  ActivateTask(CPU1Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 165); // 0
  ActivateTask(CPU0Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 32); // 0
  TerminateTask();

}

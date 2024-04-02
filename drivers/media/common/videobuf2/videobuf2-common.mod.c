#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x327df26b, "dma_buf_fd" },
	{ 0x62054d4d, "dma_buf_put" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x807acff5, "dma_buf_get" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "630D549ACC1835AF4A6DF68");
MODULE_INFO(rhelversion, "8.0");

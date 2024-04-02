#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
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
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37ea659f, "add_memory" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0x17994d70, "memhp_auto_online" },
	{ 0x54c99fac, "mem_section" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x29361773, "complete" },
	{ 0x62ef4465, "vmbus_recvpacket" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x23ea867c, "split_page" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x7a0482aa, "__online_page_free" },
	{ 0xdeae6b19, "__online_page_increment_counters" },
	{ 0x47f2d63a, "__online_page_set_limits" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0x8b728433, "set_online_page_callback" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0x26520970, "vm_memory_committed" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0xc610996a, "restore_online_page_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x327580a0, "bpf_trace_run6" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:dc7450528589e2468057a307dc18a502");

MODULE_INFO(srcversion, "92F5D323CC7FEA8244C8407");
MODULE_INFO(rhelversion, "8.0");

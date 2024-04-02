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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xdbb0c5f5, "iscsi_block_session" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x76624d21, "iscsi_remove_session" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xedd7d9a3, "iscsi_unblock_session" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x586fed6e, "iscsi_add_session" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xfc4b1093, "iscsi_recv_pdu" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xac6a960a, "iscsi_create_conn" },
	{ 0x82297185, "flush_signals" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x9758cbf6, "iscsi_destroy_conn" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0xd0c86c05, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x984c3bfe, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0x9a6a64e5, "iscsi_free_session" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x2d54308e, "iscsi_host_for_each_session" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x7882cbc, "iscsi_session_chkready" },
	{ 0x4cdfedd3, "iscsi_alloc_session" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_iscsi";


MODULE_INFO(srcversion, "E590141CF1C62D868123E36");
MODULE_INFO(rhelversion, "8.0");

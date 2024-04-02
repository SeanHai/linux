#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0x743ac344, "class_find_device" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc7f4b92, "single_open" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x985ca3e0, "single_release" },
	{ 0x28cde093, "no_llseek" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x91018733, "device_del" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xcca62a76, "device_add" },
	{ 0x9a910d01, "simple_open" },
	{ 0xc6651926, "debugfs_create_bool" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xe6478472, "_dev_info" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x551be51f, "device_initialize" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x85f5e2aa, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AC8D5B644DFA759B6459243");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x2de4f3f8, "__srcu_read_unlock" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x5bb4346e, "platform_bus_type" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1c0419f1, "__srcu_read_lock" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x36173523, "init_srcu_struct" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x5dce0bc0, "driver_find_device" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x593216c9, "platform_device_register" },
	{ 0xd0c86c05, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x10ae8a, "_cleanup_srcu_struct" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x55409c28, "synchronize_srcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3F801C13FF78042117344FA");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbf6269a1, "cn_add_callback" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x48c4b49d, "dm_dirty_log_type_unregister" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa54dc022, "cn_netlink_send" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeae3274f, "dm_dirty_log_type_register" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x29a740dc, "flush_delayed_work" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-log";


MODULE_INFO(srcversion, "AA8AA2F5EBDB27CDC5B8875");
MODULE_INFO(rhelversion, "8.0");

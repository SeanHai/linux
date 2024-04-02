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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9a67d8a, "scsi_dh_set_params" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xea2b701b, "up_read" },
	{ 0xa471982d, "dm_table_set_type" },
	{ 0x754d539c, "strlen" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7adf9244, "dm_path_uevent" },
	{ 0x783b1e86, "dm_table_get_md" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x140bb87f, "scsi_dh_attached_handler_name" },
	{ 0x91185511, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x7036dd79, "blk_lld_busy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ce08834, "scsi_dh_activate" },
	{ 0xefde5167, "dm_unregister_target" },
	{ 0x310324a, "scsi_dh_attach" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xedd02bb, "dm_suspended" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5484198, "bio_endio" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xc62c15d8, "dm_mq_kick_requeue_list" },
	{ 0x510145f7, "bdevname" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x868e01f8, "dm_device_name" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x15c2536a, "dm_noflush_suspending" },
	{ 0x121da905, "queue_work_on" },
	{ 0x37af3190, "dm_table_run_md_queue_async" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x4863dc3, "bio_associate_blkg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "114FD1887B883EF4E382E49");
MODULE_INFO(rhelversion, "8.0");

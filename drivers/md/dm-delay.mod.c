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
	{ 0xefde5167, "dm_unregister_target" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0x27e1a049, "printk" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x121da905, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x430f1014, "dm_bio_from_per_bio_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "B38B7F4E0146BCD42DA89E6");
MODULE_INFO(rhelversion, "8.0");

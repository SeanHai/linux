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
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0xa047947, "class_destroy" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0x2df52479, "device_create" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1daf1f8d, "sysfs_create_file_ns" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x91715312, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0d5ac30, "sysfs_notify" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x570add14, "sysfs_remove_file_ns" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "55A770830CDC596AEF5ABC9");
MODULE_INFO(rhelversion, "8.0");

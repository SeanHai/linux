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
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x577cee77, "led_trigger_register" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1e98c74, "avenrun" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7eedaa0b, "led_set_brightness_nosleep" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x2423d4cd, "led_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "57B9D8C2B96DE4A243DE0AB");
MODULE_INFO(rhelversion, "8.0");

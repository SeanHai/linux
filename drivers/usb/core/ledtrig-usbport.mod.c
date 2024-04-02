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
	{ 0x2423d4cd, "led_trigger_unregister" },
	{ 0x577cee77, "led_trigger_register" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x87f73154, "sysfs_add_file_to_group" },
	{ 0x28318305, "snprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x37a0cba, "kfree" },
	{ 0x2342a797, "sysfs_remove_file_from_group" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x91715312, "sprintf" },
	{ 0xc0a00ee8, "led_set_brightness" },
	{ 0xdbf25d79, "usb_for_each_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE56AC61B6EA3B641BF1B67");
MODULE_INFO(rhelversion, "8.0");

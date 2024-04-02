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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x357df27e, "__platform_driver_probe" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xf789deff, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xfe7843b, "input_event" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x91715312, "sprintf" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,sparse-keymap,rfkill";


MODULE_INFO(srcversion, "EAA1367D9A21BCE44B7B72B");
MODULE_INFO(rhelversion, "8.0");

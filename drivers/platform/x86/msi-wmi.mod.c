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
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0xd7752b86, "wmi_set_block" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9f3062e1, "sparse_keymap_report_entry" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f726f82, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,video,sparse-keymap";


MODULE_INFO(srcversion, "DD568C5C02E228CEDD867EF");
MODULE_INFO(rhelversion, "8.0");

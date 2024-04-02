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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x12e730e, "apei_exec_noop" },
	{ 0x574609c5, "apei_exec_write_register_value" },
	{ 0x90c8498c, "apei_exec_write_register" },
	{ 0x1cb7c983, "apei_exec_read_register_value" },
	{ 0x500c768c, "apei_exec_read_register" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0xd5272c1b, "simple_attr_release" },
	{ 0x99824fdf, "simple_attr_write" },
	{ 0x388c5d90, "simple_attr_read" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x87591a94, "debugfs_create_blob" },
	{ 0x6360cac2, "debugfs_create_x64" },
	{ 0x40c9f093, "debugfs_create_x32" },
	{ 0x65a17a97, "acpi_os_unmap_iomem" },
	{ 0x91715312, "sprintf" },
	{ 0xc8e2198, "acpi_os_map_iomem" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x3c01412c, "apei_get_debugfs_dir" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0xc4ae915e, "arch_touch_nmi_watchdog" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf6a28554, "region_intersects" },
	{ 0x27e1a049, "printk" },
	{ 0xb52e502, "apei_resources_add" },
	{ 0xfe0e7cd3, "apei_exec_post_unmap_gars" },
	{ 0x74457e56, "apei_resources_fini" },
	{ 0xe13cb4d, "apei_resources_release" },
	{ 0x8e6fa8b5, "apei_exec_pre_map_gars" },
	{ 0xef1f6e23, "apei_resources_request" },
	{ 0x17614bf3, "apei_resources_sub" },
	{ 0x58f9366, "apei_exec_collect_resources" },
	{ 0xedc03953, "iounmap" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbec66c3a, "__apei_exec_run" },
	{ 0xdc7df67f, "apei_exec_ctx_init" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6C6E700EEB0CBD2C9D53074");
MODULE_INFO(rhelversion, "8.0");

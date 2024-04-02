#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x6bddef80, "misc_register" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8b966b63, "sn_rtc_cycles_per_second" },
	{ 0x27e1a049, "printk" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x50a25b70, "__uv_cpu_info" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "747440731BE8DDAD793062C");
MODULE_INFO(rhelversion, "8.0");

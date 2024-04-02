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
	{ 0x9930f8a3, "uv_bios_change_memprotect" },
	{ 0x1e5a5f22, "sn_partition_id" },
	{ 0xde08c325, "gru_read_gpa" },
	{ 0x988a1a00, "sn_region_size" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x50a25b70, "__uv_cpu_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9c7283a1, "gru_copy_gpa" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x53569707, "this_cpu_off" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gru";


MODULE_INFO(srcversion, "1C3D966B6E1107F4F5D34C4");
MODULE_INFO(rhelversion, "8.0");

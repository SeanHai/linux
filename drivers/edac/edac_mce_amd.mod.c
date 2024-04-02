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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2c2f5a09, "x86_family" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x4c762b5c, "x86_stepping" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x27e1a049, "printk" },
	{ 0xdf5f0ff1, "smca_get_long_name" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x13e3aa9a, "smca_banks" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6340434e, "x86_model" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "628E96E45DFA87DA9261F98");
MODULE_INFO(rhelversion, "8.0");

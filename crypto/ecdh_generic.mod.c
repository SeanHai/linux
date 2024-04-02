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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x230d3fd9, "crypto_default_rng" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x69ef92d, "crypto_register_kpp" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0x27e1a049, "printk" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x146a479a, "crypto_unregister_kpp" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F45BBA656114F8C5C5704F");
MODULE_INFO(rhelversion, "8.0");

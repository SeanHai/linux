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
	{ 0x103b0514, "param_ops_charp" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0xd23084bc, "crypto_ahash_final" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb578fc5, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7a4497db, "kzfree" },
	{ 0x5ef0a3e9, "crypto_req_done" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0x27e1a049, "printk" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "95C6E658806B2AF400F0111");
MODULE_INFO(rhelversion, "8.0");

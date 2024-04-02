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
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x89ae7aa0, "rsa_parse_pub_key" },
	{ 0xec2580fd, "crypto_alloc_shash" },
	{ 0xc6fca088, "crypto_register_akcipher" },
	{ 0x87fe552d, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xc1bde123, "ccp_enqueue_cmd" },
	{ 0x4773b60, "ccp_present" },
	{ 0x87b8798d, "sg_next" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0x3a1a3979, "ccp_version" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe03ffb92, "crypto_shash_digest" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a66069d, "crypto_register_ahash" },
	{ 0xd75b20aa, "rsa_parse_priv_key" },
	{ 0x3479c294, "crypto_unregister_akcipher" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5666192c, "sg_alloc_table" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x1454b1c1, "crypto_unregister_ahash" },
	{ 0x7ba008ce, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fe72c8c, "crypto_unregister_aead" },
	{ 0x18e40077, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x28318305, "snprintf" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x22faa972, "crypto_unregister_alg" },
	{ 0x93ba4ad9, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ccp";


MODULE_INFO(srcversion, "09F329AE4F261A0E1D392A9");
MODULE_INFO(rhelversion, "8.0");

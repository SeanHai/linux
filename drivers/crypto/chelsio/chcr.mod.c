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
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xec2580fd, "crypto_alloc_shash" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x87fe552d, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0xfb578fc5, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc06df4fc, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xe03ffb92, "crypto_shash_digest" },
	{ 0x5a66069d, "crypto_register_ahash" },
	{ 0x1de2f19d, "cxgb4_crypto_send" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x1454b1c1, "crypto_unregister_ahash" },
	{ 0x7ba008ce, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa754d01c, "cxgb4_register_uld" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0x7a1bcd59, "gf128mul_x8_ble" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fe72c8c, "crypto_unregister_aead" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x18e40077, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x22faa972, "crypto_unregister_alg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x93ba4ad9, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cxgb4,authenc";


MODULE_INFO(srcversion, "B1003538446BAEF5CC76863");
MODULE_INFO(rhelversion, "8.0");

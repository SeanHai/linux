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
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0x95288fc1, "crypto_aes_decrypt_x86" },
	{ 0x5a558d66, "crypto_aes_encrypt_x86" },
	{ 0xbb4a40ae, "crypto_unregister_algs" },
	{ 0x48c26e52, "crypto_unregister_skciphers" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x530116e4, "crypto_grab_skcipher" },
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2de9ed9e, "cryptd_free_aead" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x59e365ee, "skcipher_register_instance" },
	{ 0x89c2ef37, "crypto_inst_setname" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0x66f221d7, "skcipher_walk_done" },
	{ 0x7e995a6d, "crypto_aes_expand_key" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x42b091a5, "crypto_register_skciphers" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0x34d99381, "cryptd_aead_queued" },
	{ 0xe83c8f9e, "glue_xts_req_128bit" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0xb4906fc3, "skcipher_walk_virt" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x1195c8df, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0xb6ca8144, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a793073, "crypto_register_algs" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x654e210b, "cryptd_aead_child" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x13be87f5, "cryptd_alloc_aead" },
	{ 0xbec30d05, "x86_match_cpu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,crypto_simd,cryptd";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");

MODULE_INFO(srcversion, "195AD6B01642432D275B8A8");
MODULE_INFO(rhelversion, "8.0");

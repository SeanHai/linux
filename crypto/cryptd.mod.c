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
	{ 0x98a8dbc, "crypto_attr_alg2" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x46e970bc, "ahash_register_instance" },
	{ 0x2fc2d96e, "shash_attr_alg" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0x87fe552d, "crypto_ablkcipher_type" },
	{ 0x7df96bcf, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xe6d52c07, "shash_ahash_digest" },
	{ 0x530116e4, "crypto_grab_skcipher" },
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x54e602e1, "crypto_init_spawn" },
	{ 0x8d8aba53, "crypto_shash_final" },
	{ 0x6e034a99, "crypto_spawn_tfm" },
	{ 0xb6372eab, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x59e365ee, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9f403edb, "crypto_grab_aead" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xd42e53ce, "crypto_register_instance" },
	{ 0x2766382f, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x5186aca3, "crypto_enqueue_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x2ce98559, "kcrypto_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0x375e9d5b, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ff4ca2b, "shash_ahash_update" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x2fa7a11d, "shash_no_setkey" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xa26368ed, "aead_register_instance" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "842A69B56B9493B4331CBDE");
MODULE_INFO(rhelversion, "8.0");

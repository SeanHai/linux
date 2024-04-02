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
	{ 0x46e970bc, "ahash_register_instance" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x8cc14bf6, "crypto_init_ahash_spawn" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0x7f11c298, "ahash_attr_alg" },
	{ 0x7df96bcf, "crypto_dequeue_request" },
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4db9321d, "crypto_hash_alg_has_setkey" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd23084bc, "crypto_ahash_final" },
	{ 0x4248ae3c, "single_task_running" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x442e4bd3, "crypto_ahash_finup" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x5186aca3, "crypto_enqueue_request" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x2ce98559, "kcrypto_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3C6E7CFF26A8860A5207A74");
MODULE_INFO(rhelversion, "8.0");

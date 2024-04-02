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
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0x26fd227, "kset_unregister" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0x4d5dbc7f, "padata_start" },
	{ 0xa967147b, "kset_create_and_add" },
	{ 0x495d3587, "kernel_kobj" },
	{ 0xb909488f, "padata_do_parallel" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9db1ecc8, "crypto_spawn_tfm2" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x973d7fb, "kobject_add" },
	{ 0x1e3bbfbd, "padata_register_cpumask_notifier" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xebadd690, "padata_alloc_possible" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xa26368ed, "aead_register_instance" },
	{ 0x28318305, "snprintf" },
	{ 0x9f403edb, "crypto_grab_aead" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x690924ff, "alloc_cpumask_var" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x515deeb3, "padata_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc347d9de, "padata_unregister_cpumask_notifier" },
	{ 0x58f47111, "padata_stop" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x37a0cba, "kfree" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x114032f2, "padata_do_serial" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E664FD805DA25E80248F655");
MODULE_INFO(rhelversion, "8.0");

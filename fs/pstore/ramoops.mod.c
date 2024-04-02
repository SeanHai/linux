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
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xcc6a1e69, "pstore_unregister" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0x9f555e3e, "vmap" },
	{ 0x54c99fac, "mem_section" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x4815265d, "init_rs_gfp" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x38d390e2, "pstore_register" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x65f24eea, "decode_rs8" },
	{ 0x74f14b6c, "encode_rs8" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9f5ad794, "param_ops_ullong" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=reed_solomon";


MODULE_INFO(srcversion, "716027E587C5BCAC982B169");
MODULE_INFO(rhelversion, "8.0");

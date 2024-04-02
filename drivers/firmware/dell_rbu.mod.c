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
	{ 0xe9b41467, "param_ops_string" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xab65ed80, "set_memory_uc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B8E223C4EF344CB2B0D80EA");
MODULE_INFO(rhelversion, "8.0");

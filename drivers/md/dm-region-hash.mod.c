#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x36c2dd1d, "mempool_exit" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x14e4112, "down_trylock" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6626afca, "down" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d754f2b, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0x3c1afa6c, "dm_dirty_log_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-log";


MODULE_INFO(srcversion, "FBCFC38143BA80DCA2D8285");
MODULE_INFO(rhelversion, "8.0");
